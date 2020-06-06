/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKShapeAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKRotatableAnnotationProtocol.h>
#import <libobjc.A.dylib/AKTextAnnotationProtocol.h>

@class NSTextStorage, NSDictionary, NSString;

@interface AKRectangularShapeAnnotation : AKShapeAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKTextAnnotationProtocol> {

	NSTextStorage* _annotationText;
	NSDictionary* _typingAttributes;
	double _rotationAngle;
	CGRect _rectangle;

}

@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (retain) NSTextStorage * annotationText;                  //@synthesize annotationText=_annotationText - In the implementation block
@property (copy) NSDictionary * typingAttributes;                   //@synthesize typingAttributes=_typingAttributes - In the implementation block
@property (assign) double rotationAngle;                            //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL isEditingText; 
@property (assign) BOOL textIsFixedWidth; 
@property (assign) BOOL textIsFixedHeight; 
@property (assign) BOOL textIsClipped; 
@property (assign) BOOL shouldUsePlaceholderText; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(NSDictionary *)typingAttributes;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(NSTextStorage *)annotationText;
-(void)setAnnotationText:(NSTextStorage *)arg1 ;
-(void)setRectangle:(CGRect)arg1 ;
-(id)keysForValuesToObserveForUndo;
-(CGRect)rectangle;
-(id)keysForValuesToObserveForRedrawing;
-(void)adjustModelToCompensateForOriginalExif;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
@end

