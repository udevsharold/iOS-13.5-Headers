/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@interface CKException : NSException
-(id)error;
-(int)errorCode;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(char*)arg3 ;
@end

