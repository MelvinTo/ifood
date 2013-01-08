//
//  IFOODAddPlaceViewController.h
//  iFood
//
//  Created by Melvin Tu on 1/8/13.
//  Copyright (c) 2013 Melvin Tu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface IFOODAddPlaceViewController : UIViewController<UISearchBarDelegate, UITableViewDataSource> {
    UISearchBar *_searchBar;
    UITableView *_tableView;
    MKMapView *_mapView;
    NSString *_searchText;
}

@property (nonatomic,retain) IBOutlet UISearchBar *searchBar;
@property (nonatomic,retain) IBOutlet UITableView *tableView;
@property (nonatomic,retain) IBOutlet MKMapView* mapView;

@end
