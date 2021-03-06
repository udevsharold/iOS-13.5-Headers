/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSecureElementObserver.h>
#import <libobjc.A.dylib/PKDashboardPassDataSource.h>

@protocol PKDashboardDataSourceDelegate;
@class PKPassGroupView, PKGroup, NSString;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource> {

	PKPassGroupView* _groupView;
	PKGroup* _group;
	id<PKDashboardDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)sendContentIsLoadedIfNecessary;
-(id)footerTextForSection:(unsigned long long)arg1 ;
-(id)initWithGroupView:(id)arg1 context:(id)arg2 ;
-(void)groupViewDidUpdatePassView:(id)arg1 ;
-(void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2 ;
@end

