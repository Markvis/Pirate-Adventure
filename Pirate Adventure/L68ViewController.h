//
//  L68ViewController.h
//  Pirate Adventure
//
//  Created by Mark Favis on 7/27/14.
//  Copyright (c) 2014 Mark Favis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface L68ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *appTitle;
@property (weak, nonatomic) IBOutlet UILabel *currentHealthLabel;
@property (weak, nonatomic) IBOutlet UILabel *currentArmorLabel;
@property (weak, nonatomic) IBOutlet UILabel *currentWeaponLabel;
@property (weak, nonatomic) IBOutlet UILabel *currentDamageLabel;
@property (weak, nonatomic) IBOutlet UILabel *storyLabel;

- (IBAction)currentTileActionButton:(UIButton *)sender;
- (IBAction)northButton:(UIButton *)sender;
- (IBAction)eastButton:(UIButton *)sender;
- (IBAction)westButton:(UIButton *)sender;
- (IBAction)southButton:(UIButton *)sender;
- (IBAction)resetButton:(UIButton *)sender;

@end