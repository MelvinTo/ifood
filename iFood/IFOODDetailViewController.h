//
//  IFOODDetailViewController.h
//  iFood
//
//  Created by Melvin Tu on 1/5/13.
//  Copyright (c) 2013 Melvin Tu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IFOODDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
