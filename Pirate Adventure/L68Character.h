//
//  L68Character.h
//  Pirate Adventure
//
//  Created by Mark Favis on 7/27/14.
//  Copyright (c) 2014 Mark Favis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "L68Armor.h"
#import "L68Weapon.h"

@interface L68Character : NSObject

@property (nonatomic) int health;
@property (nonatomic) int damage;
@property (nonatomic,strong) L68Armor * equippedArmor;
@property (nonatomic,strong) L68Weapon * equippedWeapon;

@end
