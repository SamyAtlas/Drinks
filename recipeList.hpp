//
//  recipeList.hpp
//  drinks
//
//  Created by Sam McCabe on 2/5/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#ifndef recipeList_hpp
#define recipeList_hpp

#include <stdio.h>
#include "recipes.hpp"
#include <iostream>
#include <string>
#include <vector>

class RecipeList {
public:
    RecipeList();
    std::vector<Recipes> getRecipeList();
    std::vector<std::string> findRecipe(std::string name);
    std::vector<std::string> findRecipeByIndex(int index);
    
private:
    std::vector<Recipes> recipeList;
};


#endif /* recipeList_hpp */
