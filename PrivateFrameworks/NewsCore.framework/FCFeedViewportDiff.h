/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface FCFeedViewportDiff : NSObject {

	NSString* _viewportIdentifier;
	NSArray* _insertedElements;
	NSDictionary* _insertedElementsIndices;
	NSArray* _deletedElements;
	NSDictionary* _deletedElementsIndices;
	NSArray* _modifiedElements;
	NSDictionary* _modifiedElementsIndices;
	NSArray* _groupDiffs;

}

@property (nonatomic,copy,readonly) NSString * viewportIdentifier;                       //@synthesize viewportIdentifier=_viewportIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedElements;                          //@synthesize insertedElements=_insertedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedElementsIndices;              //@synthesize insertedElementsIndices=_insertedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedElements;                           //@synthesize deletedElements=_deletedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deletedElementsIndices;               //@synthesize deletedElementsIndices=_deletedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedElements;                          //@synthesize modifiedElements=_modifiedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * modifiedElementsIndices;              //@synthesize modifiedElementsIndices=_modifiedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupDiffs;                                //@synthesize groupDiffs=_groupDiffs - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)init;
-(BOOL)isEmpty;
-(id)initWithViewportIdentifier:(id)arg1 insertedElements:(id)arg2 insertedElementsIndices:(id)arg3 deletedElements:(id)arg4 deletedElementsIndices:(id)arg5 modifiedElements:(id)arg6 modifiedElementsIndices:(id)arg7 groupDiffs:(id)arg8 ;
-(NSArray *)insertedElements;
-(NSArray *)deletedElements;
-(NSArray *)modifiedElements;
-(NSArray *)groupDiffs;
-(NSString *)viewportIdentifier;
-(NSDictionary *)insertedElementsIndices;
-(NSDictionary *)deletedElementsIndices;
-(NSDictionary *)modifiedElementsIndices;
@end

