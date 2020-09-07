/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPDLifetimeExtender.h>
#import <libobjc.A.dylib/FPDLifetimeServicing.h>

@class NSString;

@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing> {

	int _requestEffectivePID;
	NSString* _prettyDescription;
	/*^block*/id _stopBlock;

}

@property (assign) int requestEffectivePID;                         //@synthesize requestEffectivePID=_requestEffectivePID - In the implementation block
@property (retain) NSString * prettyDescription;                    //@synthesize prettyDescription=_prettyDescription - In the implementation block
@property (nonatomic,copy) id stopBlock;                            //@synthesize stopBlock=_stopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStopBlock:(id)arg1 ;
-(id)stopBlock;
-(void)stopExtendingLifetime;
-(NSString *)prettyDescription;
-(int)requestEffectivePID;
-(void)setRequestEffectivePID:(int)arg1 ;
-(void)setPrettyDescription:(NSString *)arg1 ;
@end
