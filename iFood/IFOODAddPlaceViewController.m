//
//  IFOODAddPlaceViewController.m
//  iFood
//
//  Created by Melvin Tu on 1/8/13.
//  Copyright (c) 2013 Melvin Tu. All rights reserved.
//

#import "IFOODAddPlaceViewController.h"

@interface IFOODAddPlaceViewController ()

@end

@implementation IFOODAddPlaceViewController

@synthesize searchBar = _searchBar;
@synthesize tableView = _tableView;
@synthesize mapView = _mapView;


- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

// delegates

- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText {
    _searchText = searchText;
}

- (NSInteger) tableView:(UITableView*) tableView numberOfRowsInSection:(NSInteger) section {
    return 3;
}

- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *MyIdentifier = @"SearchResult";
    UITableViewCell *cell = [tableView
                             dequeueReusableCellWithIdentifier:MyIdentifier];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc]
                 initWithStyle:UITableViewCellStyleDefault
                 reuseIdentifier:MyIdentifier];
    }
    
    cell.textLabel.text = [NSString stringWithFormat:@"%@, %d", _searchText, indexPath.row];
    
    return cell;  
}

@end
