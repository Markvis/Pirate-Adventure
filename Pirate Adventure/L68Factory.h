//
//  L68Factory.h
//  Pirate Adventure
//
//  Created by Mark Favis on 7/28/14.
//  Copyright (c) 2014 Mark Favis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "L68Tile.h"

@interface L68Factory : NSObject

@property (nonatomic,strong) NSArray * tiles;
-(NSMutableArray*)initializeTiles:(int)x by:(int)y;

@end
