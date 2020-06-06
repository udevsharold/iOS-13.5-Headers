/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSSharingActivityProviderType.h>

@class NSArray;

@interface TSSharingActivityProvider : NSObject <TSSharingActivityProviderType> {

	 activityItemSources;
	 activities;
	 excludedActivityTypes;
	 linkPresentationSource;

}

@property (copy,nonatomic) NSArray * activityItemSources; 
@property (copy,nonatomic) NSArray * activities; 
@property (copy,nonatomic) NSArray * excludedActivityTypes; 
@property (copy,nonatomic) id linkPresentationSource; 
@property (readonly,nonatomic) NSArray * activityItems; 
-(id)init;
-(NSArray *)activities;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)activityItems;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItemSources;
-(id)linkPresentationSource;
-(void)setActivityItemSources:(NSArray *)arg1 ;
-(void)setLinkPresentationSource:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 activitySources:(id)arg2 excludedActivityTypes:(id)arg3 linkPresentationSource:(id)arg4 ;
@end

