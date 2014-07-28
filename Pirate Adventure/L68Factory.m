//
//  L68Factory.m
//  Pirate Adventure
//
//  Created by Mark Favis on 7/28/14.
//  Copyright (c) 2014 Mark Favis. All rights reserved.
//

#import "L68Factory.h"

@implementation L68Factory

-(NSMutableArray*)initializeTiles:(int)x by:(int)y{
    NSMutableArray * initializedTiles = [[NSMutableArray alloc] init];
    
    for(int i = 0; i < x; i++){
        NSMutableArray * col = [[NSMutableArray alloc] init];
        for(int j = 0; j < y; j++){
            L68Tile * newTile = [[L68Tile alloc] init];
            [col addObject:newTile];
        }
        [initializedTiles addObject:col];
    }
    
    return initializedTiles;
}

@end
