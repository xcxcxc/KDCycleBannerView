//
//  KDCycleBannerView.h
//  KDCycleBannerViewDemo
//
//  Created by Kingiol on 14-4-11.
//  Copyright (c) 2014年 Kingiol. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KDCycleBannerView;

typedef void(^CompleteBlock)(void);

@protocol KDCycleBannerViewDataource <NSObject>

@required
- (NSArray *)numberOfKDCycleBannerView:(KDCycleBannerView *)bannerView;
- (UIViewContentMode)contentModeForImageIndex:(NSUInteger)index;

@optional
- (UIImage *)placeHolderImageOfZeroBannerView;
- (UIImage *)placeHolderImageOfBannerView:(KDCycleBannerView *)bannerView atIndex:(NSUInteger)index;

@end

@protocol KDCycleBannerViewDelegate <NSObject>

@optional
- (void)cycleBannerView:(KDCycleBannerView *)bannerView didScrollToIndex:(NSUInteger)index;
- (void)cycleBannerView:(KDCycleBannerView *)bannerView didSelectedAtIndex:(NSUInteger)index;

@end

@interface KDCycleBannerView : UIView

// Delegate and Datasource
@property (weak, nonatomic) IBOutlet id<KDCycleBannerViewDataource> datasource;
@property (weak, nonatomic) IBOutlet id<KDCycleBannerViewDelegate> delegate;

@property (assign, nonatomic, getter = isContinuous) BOOL continuous;
@property (assign, nonatomic) NSUInteger autoPlayTimeInterval;

- (void)reloadDataWithCompleteBlock:(CompleteBlock)competeBlock;
- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;

@end
