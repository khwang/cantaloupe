//
//  KHDetailedGraphViewController.h
//  Cantaloupe
//
//  Created by Kevin Hwang on 4/29/14.
//  Copyright (c) 2014 Kevin Hwang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KHDetailedGraphViewController : UIViewController

- (id)initWithData:(NSArray *)graphData title:(NSString *)title;

@property (nonatomic, strong) NSString *analyticsTitle;

@end
