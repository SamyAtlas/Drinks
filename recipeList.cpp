//
//  recipeList.cpp
//  drinks
//
//  Created by Sam McCabe on 2/5/19.
//  Copyright © 2019 Sam McCabe. All rights reserved.
//

#include "recipeList.hpp"
#include "recipes.hpp"
#include <iostream>
#include <string>
#include <vector>

//For copying purposes
//Recipes r*("", {});

Recipes r1("One Flew Over the Cosmo's Nest; p15", {"vodka", "cranberry juice", "triple sec", "lime juice"});
Recipes r2("Ethan Pom; p16", {"champagne", "grenadine syrup"});
Recipes r3("Love in the Time of Kahlua; p19", {"light rum", "coffee liqueur", "light cream", "cinnamon", "nutmeg"});
Recipes r4("Rye and Predjudice; p18", {"grapefruit juice", "rye whiskey", "whiskey"});
Recipes r5("A Cocktail of Two Cities; p22", {"sugar cube", "gin", "lemon juice", "champagne"});
Recipes r6("Brave New Swirled; p21", {"vodka", "watermelon", "sugar", "lemon juice", "melon liqueur"});
Recipes r7("The Cooler Purple; p24", {"blackberry liqueur", "peach schnapps", "light rum", "lemon juice"});
Recipes r8("Frangelico and Zooey", {"decaf espresso, hazelnut liqueur", "light cream"});
Recipes r9("Bloody Carrie; p26", {"tomato juice", "vodka", "lime juice", "worcestershire sauce", "wasabi paste", "hot sauce", "salt", "pepper"});
Recipes r10("Howards Blend; p28", {"brandy", "orgeat syrup", "angostura bitters"});
Recipes r11("Gin Eyre; p29", {"mint", "gin", "English gin", "lemon juice", "sugar", "orange bitters"});
Recipes r12("Paradise Sauced; p31", {"sugar", "vodka", "sour apple schnapps", "lime juice"});
Recipes r13("The Joy of Sex on the Beach; p32", {"pineapple juice", "vodka", "peach schnapps", "sprite", "lemon-lime soda"});
Recipes r14("A Midsummer Night's Beam; p34", {"mint", "lime juice", "sugar", "bourbon", "club soda"});
Recipes r15("The Postman Always Brings Ice; p36", {"ouzo", "coke"});
Recipes r16("Remembrance of Things Pabst; p37", {"tea", "beer", "lemon"});
Recipes r17("Bridget Jones's Daiquiri; p39", {"strawberries", "champagne", "sugar"});
Recipes r18("Romeo and Julep; p40", {"mint", "brown sugar", "peach schnapps", "bourbon", "sprite"});
Recipes r19("The S(ide)carlet Letter; p42", {"sugar", "cherry juice", "brandy", "triple sec"});
Recipes r20("A Rum of One's Own; p44", {"butter", "brown sugar", "cinnamon", "dark rum"});
Recipes r21("Tequila Mockingbird; p45", {"tequila", "hot sauce", "dill pickle"});
Recipes r22("The Yellow Wallbanger; p47", {"vodka", "orange juice", "Galliano liqueur"});
Recipes r23("The Unbearable Lightness of Peeing; p48", {"pineapple juice", "absinthe", "lemon"});
Recipes r24("Are You There God? It's Me, Margartia; p49", {"salt", "tequila", "lime juice", "triple sec"});
Recipes r25("The Turn of the Screwdriver-First Recipe; p51", {"orange juice", "vodka"});
Recipes r26("The Turn of the Screwdriver-Second Recipe; p51", {"sparkling orange soda", "vanilla vodka"});
Recipes r27("Crime and Punish-Mint; p55", {"vodka", "coffee liqueur", "creme de menthe liqueur", "light cream"});
Recipes r28("Decline and Fall Down; p56", {"pisco", "coke"});
Recipes r29("Drankenstein; p58", {"melon liqueur", "tequila", "club soda"});
Recipes r30("Huckleberry Sin; p60", {"blueberries", "berry-flavored vodka", "vodka", "club soda"}); //doesn't ask for regular vodka
Recipes r31("Absinthe Shrugged; p61", {"absinthe", "sugar cube"});
Recipes r32("The Count of Monte Cristal; p63", {"elderflower liqueur", "champagne"});
Recipes r33("Moby-Drink; p64", {"vodka", "blue curacao", "sprite", "swedish fish"});
Recipes r34("Gulp-iver's Travels; p66", {"vodka", "peach schnapps", "grapefruit juice", "cranberry juice"});
Recipes r35("A Confederacy of Ounces; p68", {"anise liqueur", "rye whiskey", "sugar", "peychaud's bitters", "angostura bitters", "lemon"});
Recipes r36("The Last of the Mojitos; p69", {"blueberries", "strawberries", "mint", "lemon juice", "agave nectar", "light rum", "club soda"});
Recipes r37("The Lime of the Ancient Mariner; p71", {"salt", "lime juice", "grapefruit juice", "gin"});
Recipes r38("Lord of the Mai-Tais; p72", {"cranberry juice", "orange juice", "light rum", "coconut rum", "grenadine syrup", "orange", "pineapple"}); //orange or pineapple slices
Recipes r39("Infinite Zest; p74", {"vodka", "limoncello", "lemon juice"});
Recipes r40("Heart of Dark Mist; p76", {"blackberry liqueur", "gin", "lemon juice"});
Recipes r41("The Moonshine and Sixpence; p77", {"whiskey", "pineapple juice", "coconut cream"});
Recipes r42("A Farewell to Amaretto; p79", {"amaretto", "lemon juice", "sugar"});
Recipes r43("One Hundred Beers of Solitude; p80", {"lemonade", "beer", "angostura bitters", "sprite"}); //doesn't ask for sprite, just lemonade
Recipes r44("Orange Julius Caesar; p82", {"orange juice", "milk", "light rum", "sugar", "vanilla"});
Recipes r45("Vermouth the Bell Tolls; p84", {"sherry", "sweeet vermouth", "peychaud's bitters"});
Recipes r46("Silas Marnier; p85", {"goldschlager", "grand marnier", "ginger ale", "angostura bitters"});
Recipes r47("The Old Man and the Seagram's; p87", {"whiskey", "sprite", "kumquat"});
Recipes r48("The Malted Falcon; p88", {"malt liquor", "butterscotch liqueur"});
Recipes r49("Twenty Thousand Leagues Under the Sea Breeze; p90", {"vodka", "grapefruit juice", "cranberry juice", "club soda"});
Recipes r50("Lord Pimm; p92", {"cucumber", "pimm's", "sprite", "lemon"}); //pimm's no. 1 is what it says in book
Recipes r51("The Sound and the Slurry; p93", {"gin", "creme de cassis", "lemon juice"});
Recipes r52("Fahrenheit 151; p97", {"apple cider", "cranberry juice", "orange juice", "pineapple juice", "cloves", "cinnamon sticks", "rum"});
Recipes r53("Gone with the Wine; p98", {"red wine", "peach brandy", "sugar", "peaches", "oranges", "ginger ale"});
Recipes r54("The Rye in the Catcher; p99", {"rye whiskey", "pineapple juice", "lemon juice", "ginger beer"});
Recipes r55("The Adventures of Sherbet Holmes; p101", {"berry sherbet", "champagne", "ginger ale", "blueberries"});
Recipes r56("The Pitcher of Dorian Grey Goose; p102", {"mint", "lemonade concentrate", "vodka", "cucumber"});
Recipes r57("The Portrait of a Pink Lady; p104", {"gin", "pink lemonade", "grenadine syrup", "grenadine", "club soda"});
Recipes r58("The Joy Luck Club Soda; p105", {"light rum", "orange juice", "club soda", "lemon juice", "brandy", "orgeat syrup"});
Recipes r59("Woo Woo; bookmarks", {"vodka", "peach schnapps", "cranberry juice", "lime"});
Recipes r60("Bay Breeze; bookmarks", {"vodka", "cranberry juice", "pineapple juice", "lime"});
Recipes r61("The Madras; bookmarks", {"vodka", "cranberry juice", "orange juice", "lime"});
Recipes r62("Sea Breeze; bookmarks", {"vodka", "cranberry juice", "grapefruit juice", "grapefruit"});
Recipes r63("Girl Scout Cookie Cocktail; bookmarks", {"coffee liqueur", "Irish cream liqueur", "peppermint schnapps"});
Recipes r64("Michelada; bookmarks", {"beer", "lime juice", "hot sauce", "soy sauce", "worcestershire sauce"});
Recipes r65("Buttery Nipple Shooter; bookmarks", {"butterscotch schnapps", "irish cream liqueur"});
Recipes r66("Black Velvet Cocktail; bookmarks", {"champagne", "stout"});
Recipes r67("Sazerac Cocktail Classic With Rye Whiskey; bookmarks", {"sugar cube", "peychaud's bitters", "rye whiskey", "absinthe"});
/*
Recipes r68("", {});
Recipes r69("", {});
Recipes r70("", {});
Recipes r71("", {});
*/


//PUT IN ALL THE RECIPES
std::vector<Recipes> listOfRecipes = {r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47, r48, r49, r50, r51, r52, r53, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64, r65, r66, r67};


//Start of actual code
RecipeList::RecipeList() { recipeList = listOfRecipes; };

std::vector<Recipes> RecipeList::getRecipeList() { return recipeList; }

std::vector<std::string> RecipeList::findRecipe(std::string name) {
    for (int i = 0; i < listOfRecipes.size(); i++) {
        if (name == listOfRecipes[i].getName()) {
            return listOfRecipes[i].getRecipe();
        }
    }
    std::vector<std::string> nothing = {};
    return nothing;
};

std::vector<std::string> RecipeList::findRecipeByIndex(int index) {
    for (int i =0; i < listOfRecipes.size(); i++) {
        if (index == i) {
            return listOfRecipes[index].getRecipe();
        }
    }
    std::vector<std::string> nothing;
    return nothing;
}



