//
//  IFOODAppDelegate.h
//  iFood
//
//  Created by Melvin Tu on 1/5/13.
//  Copyright (c) 2013 Melvin Tu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IFOODAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
