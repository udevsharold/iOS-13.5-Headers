/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet;

@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding> {

	NSOrderedSet* _changes;

}

@property (nonatomic,readonly) NSOrderedSet * changes;              //@synthesize changes=_changes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffWithChanges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)changes;
-(id)initWithChanges:(id)arg1 ;
@end

