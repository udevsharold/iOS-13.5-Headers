/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPSearchClientTemplateDelegate.h>

@protocol CPSearchTemplateDelegate;
@class NSArray, NAFuture, NSString;

@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate> {

	id<CPSearchTemplateDelegate> _delegate;
	NSArray* _listItems;

}

@property (nonatomic,retain) NSArray * listItems;                                       //@synthesize listItems=_listItems - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (assign,nonatomic,__weak) id<CPSearchTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSearchTemplateDelegate>)delegate;
-(void)setDelegate:(id<CPSearchTemplateDelegate>)arg1 ;
-(NSArray *)listItems;
-(void)setListItems:(NSArray *)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(void)searchTemplate:(id)arg1 updateSearchResultsForSearchText:(id)arg2 completionResults:(/*^block*/id)arg3 ;
-(void)searchTemplate:(id)arg1 selectedResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)searchTemplateSearchButtonPressed:(id)arg1 ;
@end
