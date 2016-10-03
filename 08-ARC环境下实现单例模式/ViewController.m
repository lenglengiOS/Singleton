//
//  ViewController.m
//  08-ARC环境下实现单例模式
//
//  Created by admin on 16/10/3.
//  Copyright © 2016年 admin. All rights reserved.
//

#import "ViewController.h"
#import "LHLTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    LHLTool *t1 = [[LHLTool alloc] init];
    LHLTool *t2 = [[LHLTool alloc] init];
    LHLTool *t3 = [LHLTool new];
    LHLTool *t4 = [LHLTool sharedLHLTool];
    LHLTool *t5 = [t1 copy];
    LHLTool *t6 = [t1 mutableCopy];
    
    NSLog(@"t1:%p t2:%p t3:%p t4:%p t5:%p t6:%p", t1, t2, t3, t4, t5, t6);
    
}

@end
