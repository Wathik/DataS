//
//  TWMasterViewController.h
//  DataS
//
//  Created by Wathik Almayali on 7/17/14.
//  Copyright (c) 2014 Wathik Almayali. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface TWMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
