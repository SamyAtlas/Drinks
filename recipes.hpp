//
//  recipes.hpp
//  drinks
//
//  Created by Sam McCabe on 2/5/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#ifndef recipes_hpp
#define recipes_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

class Recipes {
public:
    Recipes();
    Recipes(std::string makeName, std::vector<std::string> makeRecipe);
    std::string getName();
    std::vector<std::string> getRecipe();
    int getRecipeSize();
    //std::vector<std::string> returnIngredients(std::string recipeName);
    
    //For later use if wanted:
    //void createName(std::string makeName);
    //void createRecipe(std::vector<std::string> makeRecipe);
    
private:
    std::string name;
    std::vector<std::string> recipe;
    
};

#endif /* recipes_hpp */
