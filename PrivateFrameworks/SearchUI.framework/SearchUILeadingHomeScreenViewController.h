/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUILeadingViewController.h>
#import <SearchUI/SearchUIHomeScreenEngagementDelegate.h>

@class SearchUIHomeScreenAppIconView, NSString;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (nonatomic,retain) SearchUIHomeScreenAppIconView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
-(unsigned long long)type;
-(void)didEngageResult:(id)arg1 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)dismissIfNecessaryForIconDrag;
@end

