//
//  TWDetailViewController.h
//  DataS
//
//  Created by Wathik Almayali on 7/17/14.
//  Copyright (c) 2014 Wathik Almayali. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
