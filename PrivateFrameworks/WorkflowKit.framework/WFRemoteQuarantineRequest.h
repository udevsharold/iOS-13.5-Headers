/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFRemoteQuarantineRequest <NSObject>
@property (nonatomic,readonly) NSString * policyFunctionName; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptMessage; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorMessage; 
@required
-(NSString *)policyFunctionName;
-(NSString *)defaultLocalizedPromptTitle;
-(NSString *)defaultLocalizedPromptMessage;
-(NSString *)defaultLocalizedDeniedErrorTitle;
-(NSString *)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1;

@end

