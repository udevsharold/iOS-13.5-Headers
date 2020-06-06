/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding> {

	NSObject*<OS_xpc_object> _dialog;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedDialog;              //@synthesize dialog=_dialog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithEncodedDialog:(id)arg1 ;
-(NSObject*<OS_xpc_object>)encodedDialog;
-(void)startWithDialogResponseBlock:(/*^block*/id)arg1 ;
@end

