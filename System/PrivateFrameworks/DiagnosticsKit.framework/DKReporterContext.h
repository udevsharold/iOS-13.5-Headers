/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKReporterRemoteContext.h>

@class NSString;

@interface DKReporterContext : NSExtensionContext <DKReporterRemoteContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)startRemoteReportWithComponentIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

