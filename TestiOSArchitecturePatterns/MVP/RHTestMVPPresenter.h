//
//  RHTestMVPPresenter.h
//  TestiOSArchitecturePatterns
//
//  Created by DaFenQI on 2018/3/27.
//  Copyright © 2018年 DaFenQI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RHTestMVPViewController.h"

@interface RHTestMVPPresenter : NSObject

- (instancetype)initWithView:(RHTestMVPViewController *)view;
- (void)reloadCollectionView;

@end
