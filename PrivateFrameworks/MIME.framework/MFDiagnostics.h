/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class MFWeakSet, NSLock, NSString;

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {

	MFWeakSet* _diagnosticsGenerators;
	NSLock* _diagnosticLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(id)copyDiagnosticInformation;
-(void)addDiagnosticsGenerator:(id)arg1 ;
-(void)removeDiagnosticsGenerator:(id)arg1 ;
@end

