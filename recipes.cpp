//
//  recipes.cpp
//  drinks
//
//  Created by Sam McCabe on 2/5/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#include "recipes.hpp"
#include <iostream>
#include <string>
#include <vector>

Recipes::Recipes() {
    name = "";
    recipe = {};
}

Recipes::Recipes(std::string makeName, std::vector<std::string> makeRecipe) {
    name = makeName;
    recipe = makeRecipe;
}

std::string Recipes::getName() { return name; }

std::vector<std::string> Recipes::getRecipe() { return recipe; }

int Recipes::getRecipeSize() { return recipe.size(); }

//std::vector<std::string> returnIngredients(std::string recipeName) { return }

//For later use if wanted:
//void Recipes::createName(std::string makeName) { name = makeName; }
//void Recipes::createRecipe(std::vector<std::string> makeRecipe) { recipe = makeRecipe; }



