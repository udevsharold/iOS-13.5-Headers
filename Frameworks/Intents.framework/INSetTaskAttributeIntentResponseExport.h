/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTask;


@protocol INSetTaskAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTask * modifiedTask; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;
-(INTask *)modifiedTask;
-(void)setModifiedTask:(id)arg1;

@end

