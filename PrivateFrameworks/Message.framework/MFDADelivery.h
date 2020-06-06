/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDelivery.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class DAMailAccount, MFMessageLibrary, NSString;

@interface MFDADelivery : MFMailDelivery <EFLoggable> {

	DAMailAccount* _DAMailAccount;
	MFMessageLibrary* _library;
	NSString* _folderID;
	NSString* _accountID;
	NSString* _originalMessageID;
	NSString* _originalLongID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)setDAMailAccount:(id)arg1 ;
-(id)newMessageWriter;
-(void)_updateBasedOnOriginalMessage:(id)arg1 ;
-(id)deliverSynchronously;
@end

