/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNFoundationError : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(BOOL)isCanceledError:(id)arg1 ;
+(BOOL)isTimeoutError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithErrno;
+(id)timeoutError;
+(id)errorWithErrno:(int)arg1 userInfo:(id)arg2 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)userCanceledError;
+(BOOL)isFileNotFoundError:(id)arg1 ;
+(BOOL)isCertificateError:(id)arg1 ;
+(id)errorWithErrno:(int)arg1 ;
+(id)errorWithErrnoAndUserInfo:(id)arg1 ;
@end

