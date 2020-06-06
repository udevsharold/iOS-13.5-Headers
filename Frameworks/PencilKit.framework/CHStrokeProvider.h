/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CHStrokeProvider <NSObject>
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@optional
-(BOOL)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;

@required
-(id)strokeForIdentifier:(id)arg1;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;

@end

