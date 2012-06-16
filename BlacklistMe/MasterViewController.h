//
//  MasterViewController.h
//  BlacklistMe
//
//  Created by Arul Prasad M L on 16/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>
#import <CoreLocation/CoreLocation.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) CLLocationManager *locationManager;


@end
