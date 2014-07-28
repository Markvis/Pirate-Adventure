//
//  L68Tile.h
//  Pirate Adventure
//
//  Created by Mark Favis on 7/27/14.
//  Copyright (c) 2014 Mark Favis. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface L68Tile : NSObject

@property (nonatomic,strong) NSString * story;
@property (nonatomic,strong) UIImage * background;
@property (nonatomic) CGPoint coordinate;

@end
