//
//  main.cpp
//  drinks
//
//  Created by Sam McCabe on 2/4/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

//TODO::
    //take out duplicates from user input
    //make it so if there's similar ingredients, it works
    //have notes

//maybe::
    //how much of each
    //change all "juices" to just the fruit

#include "recipes.hpp"
#include "recipeList.hpp"
#include "graphClass.hpp"
#include <iostream>
#include <set>
#include <string>
#include <vector>


std::pair<int, std::string> compareIngredients(Recipes recipeVector, std::vector<std::string> ingredientsVector);
std::set<std::pair<int, std::string>> recipesWithMostOwnedIngredients(std::vector<std::string> ownedIngredients, std::set<std::pair<int, std::string>> setOfRecipes);

RecipeList allRecipes = RecipeList();


int main(int argc, const char * argv[]) {
    //making master list of ingredients without duplicates
    std::vector<std::string> masterListofIngredients = allRecipes.findRecipeByIndex(0);
    for (int x = 0; x < allRecipes.getRecipeList().size(); x++) {
        std::vector<std::string> secondRecipe = allRecipes.findRecipeByIndex(x);
        for (int i = 0; i < masterListofIngredients.size(); i++) {
            for (int j = 0; j < secondRecipe.size(); j++) {
                if (masterListofIngredients[i] == secondRecipe[j]) {
                    secondRecipe.erase(secondRecipe.begin() + j);
                    j--;
                }
            }
        }
        masterListofIngredients.insert(masterListofIngredients.end(), secondRecipe.begin(), secondRecipe.end());
    }
    
    //printing out master list
    for (int i = 0; i < masterListofIngredients.size(); i++) {
        std::cout << masterListofIngredients[i] << ",   ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    
    //getting owned ingredient inputs
    std::vector<std::string> ownedIngredients;
    std::string ingredient;
    while (ingredient != "done")  {
        std::cout << "Enter the ingredients in lowercase or type 'done'\n";
        std::getline(std::cin, ingredient);
        std::cout << std::endl;
        if (ingredient != "done") {
            ownedIngredients.push_back(ingredient);
        }
    }
    
    std::set<std::pair<int, std::string>> setOfRecipes;
    
    //finds recipes with the most owned ingredients, prints them out, and returns setOfRecipes
    setOfRecipes = recipesWithMostOwnedIngredients(ownedIngredients, setOfRecipes);
    
    std::cout << "\n True: " << true << "\n \n";
    
    //creates graph of setOfRecipes
    Graph graphOfRecipes(setOfRecipes.size());
    
    int counter = 0; //counts how many cycles loop has gone through
    for (auto e : setOfRecipes) {
      
        std::vector<std::string> currentRecipe = allRecipes.findRecipe(e.second);
        
        int xy = currentRecipe.size(); //counter to see how many missing ingredients
        for (int x = 0; x < ownedIngredients.size(); x++) {
            for (int y = 0; y < currentRecipe.size(); y++) {
                if (ownedIngredients[x] == currentRecipe[y]) {
                    xy--;
                    break;
                }
            }
            if (xy <= 3) {
                break;
            }
        }
        
        if (xy <= 3) {
            std::vector<std::string> ownedPlusNew = ownedIngredients; //makes new vector of already owned plus new ingredients going to buy
            
            for (int i = 0; i < ownedIngredients.size(); i++) {
                for (int j = 0; j < currentRecipe.size(); j++) {
                    if (ownedIngredients[i] == currentRecipe[j]) {
                        currentRecipe.erase(currentRecipe.begin() + j);
                        j--;
                    }
                }
            }
            
            ownedPlusNew.insert(ownedPlusNew.end(), currentRecipe.begin(), currentRecipe.end()); //adds currentRecipe to ownedPlusNew
           
            int counter2 = 0;
            for (auto e2 : setOfRecipes) {
                std::vector<std::string> otherRecipe = allRecipes.findRecipe(e2.second);
               // std::cout << e2.second << ": " << otherRecipe.size() << std::endl;
                int recipeSize = otherRecipe.size();
                
                for (int j = 0; j < ownedPlusNew.size(); j++) { //compares ingredients and if they are all "owned" then put in edge
                    for (int k = 0; k < otherRecipe.size(); k++) {
                        if (ownedPlusNew[j] == otherRecipe[k]) {
                            recipeSize--;
                            break;
                            }
                        }
                    if (recipeSize == 0) { //if all the ingredients in currentRecipe are in ownedPlusNew, then break
                        graphOfRecipes.addEdge(counter, counter2);
                       // std::cout << recipeSize << ": " << e2.second << "; ";
                        break;
                    }
                }
                counter2++;
           }
        }
        counter++;
    }
    
    graphOfRecipes.toString();
    
    //finds the recipe that should buy ingredients for through graph
    int numMaxRecipe = 0;
    int vertixNum = 0;
    for (int i = 0; i < graphOfRecipes.getNumVertices(); i++) {
        int numCurrentRecipe = graphOfRecipes.getNumEdges(i);
        if (numCurrentRecipe > numMaxRecipe) {
            numMaxRecipe = numCurrentRecipe;
            vertixNum = i;
        }
    }
    
    //prints out which recipe to buy all ingredients from
    int count = 0;
    for (auto e : setOfRecipes) {
        if (count == vertixNum) {
            std::cout << "\nBuy missing ingredients from " << e.second << " to make a total of " << graphOfRecipes.getNumEdges(vertixNum) << " recipes\n";
            break;
        }
        count++;
    }
    
    //prints out recipes you can make after buying ingredients
    std::cout << "\nRECIPES YOU CAN MAKE:\n";
    int x = 0; //counter for for loop
    for (auto e : setOfRecipes) {
        if (graphOfRecipes.isEdge(vertixNum, x)) {
            std::cout << e.second << std::endl;
        }
        x++;
    }
    
    return 0;
}





//Functions:
std::pair<int, std::string> compareIngredients(Recipes recipeVector, std::vector<std::string> ingredientsVector) {
    int counter = 0;
    for (int i = 0; i < ingredientsVector.size(); i++) {
        for (int j = 0; j < recipeVector.getRecipeSize(); j++) {
            if (ingredientsVector[i] == recipeVector.getRecipe()[j]) {
                counter++;
                break;
            }
        }
        if (counter == recipeVector.getRecipeSize()) { //if all the ingredients in the recipe is owned, break
            break;
        }
    }
    counter = recipeVector.getRecipeSize() - counter;
    std::pair<int, std::string> returnPair(counter, recipeVector.getName());
    return returnPair;
}



//finds recipes with the most owned ingredients, prints them out, and returns setOfRecipes
std::set<std::pair<int, std::string>> recipesWithMostOwnedIngredients(std::vector<std::string> ownedIngredients, std::set<std::pair<int, std::string>> setOfRecipes) {
    
    //loops through all the recipes and if a recipe has an matched ingredient, then it gets put into setOfRecipes
    for (int i = 0; i < allRecipes.getRecipeList().size(); i++) {
        std::pair<int, std::string> recipePair = compareIngredients(allRecipes.getRecipeList()[i], ownedIngredients);
        if (recipePair.first < allRecipes.getRecipeList()[i].getRecipeSize()) {
            setOfRecipes.insert(recipePair);
        }
    }
    
    std::cout << "\nRECIPES THAT YOU ALREADY HAVE MOST OR ALL INGREDIENTS FOR:\n";
    //std::cout << "\nRecipes that you already have most or all ingredients for:\n\n";
    if (setOfRecipes.size() <= 10) {
        for (auto e : setOfRecipes) {
            std::cout << e.second << "\n";
        }
    } else {
        int x = 0; //counter to 10
        for (auto e : setOfRecipes) {
            std::cout << e.second << "\n";
            x++;
            if (x == 10) {
                break;
            }
        }
    }
    
    return setOfRecipes;
    
}



