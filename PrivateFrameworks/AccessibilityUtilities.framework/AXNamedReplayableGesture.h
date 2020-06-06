/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXMutableReplayableGesture.h>

@class NSString;

@interface AXNamedReplayableGesture : AXMutableReplayableGesture {

	BOOL _hasLocalizableName;
	BOOL _shouldPerformAtOriginalLocation;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasLocalizableName;                           //@synthesize hasLocalizableName=_hasLocalizableName - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformAtOriginalLocation;              //@synthesize shouldPerformAtOriginalLocation=_shouldPerformAtOriginalLocation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gestureWithLegacyFormatDictionary:(id)arg1 ;
+(id)gestureWithPoints:(id)arg1 times:(id)arg2 forces:(id)arg3 ;
+(id)_fingerIdentifierForFingerAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasLocalizableName;
-(void)setHasLocalizableName:(BOOL)arg1 ;
-(BOOL)shouldPerformAtOriginalLocation;
-(void)setShouldPerformAtOriginalLocation:(BOOL)arg1 ;
-(id)gestureShiftedByOffset:(CGPoint)arg1 ;
@end

