//
//  SecondViewController.m
//  PopHandler
//
//  Created by 李永杰 on 2020/7/10.
//  Copyright © 2020 李永杰. All rights reserved.
//

#import "SecondViewController.h"
#import "UIViewController+PopHandler.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor grayColor];
    // Do any additional setup after loading the view.
}
 

- (BOOL)navigationShouldPop {
    return NO;
}

@end
