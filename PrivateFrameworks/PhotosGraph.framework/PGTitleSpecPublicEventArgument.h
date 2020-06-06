/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument {

	BOOL _shouldUseLongPublicEventTitle;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLongPublicEventTitle;              //@synthesize shouldUseLongPublicEventTitle=_shouldUseLongPublicEventTitle - In the implementation block
+(id)_cleanUpEventName:(id)arg1 ;
+(id)argumentWithPublicEventType:(unsigned long long)arg1 ;
+(id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(BOOL)arg2 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithPublicEventType:(unsigned long long)arg1 ;
-(id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(BOOL)arg2 ;
-(id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2 ;
-(id)_commonPublicEventNodeForMomentNodes:(id)arg1 ;
-(id)_generateTitleWithEventNameForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1 ;
-(BOOL)shouldUseLongPublicEventTitle;
@end

