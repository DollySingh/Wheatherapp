//
//  NewsTableViewController.h
//  Webservice
//
//  Created by Felix-Madhuri on 07/11/16.
//  Copyright © 2016 Felix-Madhuri. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsTableViewController : UITableViewController<NSURLConnectionDelegate,NSURLConnectionDataDelegate>

@property(nonatomic,retain)NSMutableArray *newsarray;

@property(nonatomic,retain)NSMutableData *buffer;


@end
