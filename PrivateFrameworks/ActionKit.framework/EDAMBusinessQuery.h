/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:40 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery : FATObject {

	EDAMNoteFilter* _filter;
	NSNumber* _numExperts;
	NSNumber* _includeNotebooks;
	NSNumber* _includeNotesCounts;

}

@property (nonatomic,retain) EDAMNoteFilter * filter;                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * numExperts;                      //@synthesize numExperts=_numExperts - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotebooks;                //@synthesize includeNotebooks=_includeNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotesCounts;              //@synthesize includeNotesCounts=_includeNotesCounts - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(NSNumber *)includeNotebooks;
-(void)setIncludeNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)numExperts;
-(void)setNumExperts:(NSNumber *)arg1 ;
-(NSNumber *)includeNotesCounts;
-(void)setIncludeNotesCounts:(NSNumber *)arg1 ;
@end

