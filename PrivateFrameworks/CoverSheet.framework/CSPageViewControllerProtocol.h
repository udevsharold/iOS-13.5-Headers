/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CSLayoutStrategy, NSString;


@protocol CSPageViewControllerProtocol <CSCoverSheetViewPresenting>
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy; 
@property (nonatomic,copy,readonly) NSString * pageRole; 
@optional
-(unsigned long long)listLayout;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(double)customListWidth;
-(unsigned long long)dateTimeLayout;
-(double)dateTimeInsetX;
-(double)minimumDateToListSpacing;
-(NSString *)pageRole;

@required
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(BOOL)authenticated;
-(void)setTransitioning:(BOOL)arg1;
-(BOOL)isTransitioning;
-(id<CSCoverSheetViewControllerProtocol>)coverSheetViewController;
-(void)setCoverSheetViewController:(id)arg1;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(id)arg1;

@end

