/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIUserActivityRestorerDelegate;
@class CNContactStore;

@interface CNUIUserActivityRestorer : NSObject {

	id<CNUIUserActivityRestorerDelegate> _delegate;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIUserActivityRestorerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)log;
-(id<CNUIUserActivityRestorerDelegate>)delegate;
-(void)setDelegate:(id<CNUIUserActivityRestorerDelegate>)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1 ;
-(BOOL)restoreUserActivity:(id)arg1 ;
@end

