//
//  IFOODMasterViewController.h
//  iFood
//
//  Created by Melvin Tu on 1/5/13.
//  Copyright (c) 2013 Melvin Tu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IFOODDetailViewController;

#import <CoreData/CoreData.h>

@interface IFOODMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) IFOODDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
