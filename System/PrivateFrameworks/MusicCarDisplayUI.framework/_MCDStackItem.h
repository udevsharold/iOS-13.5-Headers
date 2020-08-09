/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface _MCDStackItem : NSObject {

	NSString* _identifier;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
+(id)stackItemWithContainer:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSIndexPath *)indexPath;
@end
