/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction {

	BOOL _send;

}

@property (assign,nonatomic) BOOL send;              //@synthesize send=_send - In the implementation block
-(BOOL)send;
-(void)setSend:(BOOL)arg1 ;
-(id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(BOOL)arg3 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
@end

