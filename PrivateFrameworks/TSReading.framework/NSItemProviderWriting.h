/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NSItemProviderWriting <NSObject>
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@optional
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;

@required
+(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2;

@end

