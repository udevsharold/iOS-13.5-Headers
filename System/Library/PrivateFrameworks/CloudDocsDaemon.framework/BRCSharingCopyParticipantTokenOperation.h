/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString, NSError;

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	CKRecordID* _shareID;
	CKRecordID* _contentRecordID;
	NSString* _participantKey;
	NSString* _baseToken;
	NSError* _error;
	BOOL _iWorkShareable;
	BOOL _isChildOfShare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithItem:(id)arg1 ;
-(id)createActivity;
-(void)_fetchBaseTokenWithCompletion:(/*^block*/id)arg1 ;
@end

