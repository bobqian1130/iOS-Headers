/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTExpressionNode.h>

@class NSString, TSCECalculationEngine, TSDMultiPaneController, TSTReferenceColorHelper;

// Not exported
@interface TSTReferenceNode : TSTExpressionNode
{
    CDStruct_5744d895 mRangeReference;
    unsigned char mStickyBits;
    struct __CFUUID *mHostTableID;
    TSDMultiPaneController *mMenuPopoverController;
    _Bool mRangeWithFunction;
    TSCECalculationEngine *mCalculationEngine;
    int mRangeContext;
    NSString *mRefString;
    TSTReferenceColorHelper *mReferenceColorHelper;
    _Bool mBlankForKeyboardInsertion;
}

@property(retain, nonatomic) TSTReferenceColorHelper *referenceColorHelper; // @synthesize referenceColorHelper=mReferenceColorHelper;
@property(nonatomic) int rangeContext; // @synthesize rangeContext=mRangeContext;
@property(readonly, nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=mCalculationEngine;
@property(nonatomic, getter=isRangeWithFunction) _Bool rangeWithFunction; // @synthesize rangeWithFunction=mRangeWithFunction;
@property(nonatomic) unsigned char stickyBits; // @synthesize stickyBits=mStickyBits;
- (id).cxx_construct;
- (void)saveToArchive:(struct ReferenceNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ReferenceNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_resetMenu;
- (_Bool)p_isValidReference;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (void)p_buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 forRangeComponent:(CDStruct_0441cfb5)arg2 stickyBits:(unsigned char)arg3 hostCell:(CDStruct_0441cfb5)arg4;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)string;
- (int)tokenType;
- (id)asTableSelection;
@property(nonatomic, getter=isBlankForKeyboardInsertion) _Bool blankForKeyboardInsertion;
@property(readonly, nonatomic, getter=isSimpleRowOrColumnReference) _Bool simpleRowOrColumnReference;
@property(readonly, nonatomic, getter=isResizable) _Bool resizable;
@property(readonly, nonatomic, getter=isError) _Bool error;
@property(readonly, nonatomic, getter=isLocalReference) _Bool localReference;
@property(readonly, nonatomic, getter=isSingleASTNode) _Bool singleASTNode;
@property(readonly, nonatomic, getter=isNonSpanningRange) _Bool nonSpanningRange;
@property(readonly, nonatomic, getter=isRange) _Bool range;
@property(nonatomic, setter=setHostTableID:) struct __CFUUID *hostTableID; // @synthesize hostTableID=mHostTableID;
@property(nonatomic, setter=setTableID:) struct __CFUUID *tableID;
@property(nonatomic) CDStruct_db54a1d4 rangeCoordinate; // @dynamic rangeCoordinate;
@property(nonatomic) CDStruct_5744d895 rangeReference; // @dynamic rangeReference;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithReferenceStart:(id)arg1 referenceEnd:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 cellRange:(struct)arg3 stickyBits:(unsigned char)arg4 hostTableID:(struct __CFUUID *)arg5 tableID:(struct __CFUUID *)arg6 referenceColorHelper:(id)arg7 firstIndex:(unsigned long long)arg8 lastIndex:(unsigned long long)arg9;

@end

