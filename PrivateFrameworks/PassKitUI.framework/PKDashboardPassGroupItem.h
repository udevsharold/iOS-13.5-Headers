/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKPassGroupView, NSString;

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem> {

	PKPassGroupView* _groupView;

}

@property (nonatomic,readonly) PKPassGroupView * groupView;              //@synthesize groupView=_groupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPassGroupView *)groupView;
-(id)initWithGroupView:(id)arg1 ;
@end

