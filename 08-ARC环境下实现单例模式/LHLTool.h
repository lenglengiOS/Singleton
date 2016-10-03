//
//  LHLTool.h
//  08-ARC环境下实现单例模式
//
//  Created by admin on 16/10/3.
//  Copyright © 2016年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Single.h"

@interface LHLTool : NSObject<NSCopying, NSMutableCopying>

SingleH(LHLTool)

@end
