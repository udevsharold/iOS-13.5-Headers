/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class SSUIRunPPTServiceRequest, RCPMovie, NSString;

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding> {

	SSUIRunPPTServiceRequest* _runPPTServiceRequest;
	RCPMovie* _recapMovie;

}

@property (nonatomic,retain) SSUIRunPPTServiceRequest * runPPTServiceRequest;              //@synthesize runPPTServiceRequest=_runPPTServiceRequest - In the implementation block
@property (nonatomic,retain) RCPMovie * recapMovie;                                        //@synthesize recapMovie=_recapMovie - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(SSUIRunPPTServiceRequest *)runPPTServiceRequest;
-(RCPMovie *)recapMovie;
-(void)setRunPPTServiceRequest:(SSUIRunPPTServiceRequest *)arg1 ;
-(void)setRecapMovie:(RCPMovie *)arg1 ;
@end

