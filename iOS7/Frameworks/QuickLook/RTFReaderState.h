/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, RTFTextTable;

@interface RTFReaderState : NSObject
{
    id _delegate;
    unsigned long _defaultToUniCharEncoding;
    NSMutableDictionary *_documentInfoDictionary;
    struct CGSize _paperSize;
    float _lMargin;
    float _rMargin;
    float _bMargin;
    float _tMargin;
    struct CGSize _viewSize;
    int _viewScale;
    int _viewKind;
    NSMutableArray *_attributesStack;
    NSMutableDictionary *_curAttributes;
    unsigned int _level;
    struct _NSAttributeInfo _attributeInfo;
    NSMutableData *_attributeInfoStack;
    int _tableNestingLevel;
    BOOL _isRTLDocument;
    NSArray *_textBlocks;
    NSMutableArray *_nestedTables;
    RTFTextTable *_currentTable;
    RTFTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
    BOOL _setTableCells;
    unsigned int _currentBorderEdge;
    BOOL _currentBorderIsTable;
    NSMutableDictionary *_listDefinitions;
    int _currentListNumber;
    int _currentListLevel;
}

- (void)_notifyEndTableCellWithCell:(id)arg1;
- (void)_notifyStartTableCell;
- (void)_notifyEndTableRow;
- (void)_notifyStartTableRow;
- (void)_notifyEndTable;
- (void)_notifyStartTable;
- (void)_notifyEndParagraph;
- (void)_notifyStartParagraph;
- (void)_notifyProcessString:(id)arg1;
- (void)addOverride:(int)arg1 forKey:(int)arg2;
- (void)addListDefinition:(id)arg1 forKey:(int)arg2;
- (id)listDefinitions;
- (void)setCurrentListLevel:(int)arg1;
- (int)currentListLevel;
- (void)setCurrentListNumber:(int)arg1;
- (int)currentListNumber;
- (void)setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (void)mergeTableCellsVertically;
- (void)mergeTableCellsHorizontally;
- (void)endTableRow;
- (BOOL)isLastTableRow;
- (void)lastTableRow;
- (void)endTableCell;
- (void)_paragraphInTable;
- (void)endTableCellDefinition;
- (void)startTableRowDefinition;
- (void)setTableNestingLevel:(int)arg1;
- (void)_clearTableCells;
- (void)_setTableCells;
- (void)_popTableState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (BOOL)_currentTableCellIsPlaceholder;
- (BOOL)currentBorderIsTable;
- (unsigned int)currentBorderEdge;
- (id)currentTableCell;
- (id)currentTable;
- (void)_beginTableRow;
- (void)_ensureTableCells;
- (BOOL)currentTableCellIsPlaceholder;
- (void)setTableFlags:(unsigned int)arg1;
- (void)paragraphInTable;
- (void)_updateAttributes;
- (void)processString:(id)arg1;
- (void)endParagraph;
- (void)startParagraph;
- (id)currentParagraphStyle;
- (id)mutableParagraphStyle;
- (id)defaultParagraphStyle;
- (void)removeAttributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (int)baseWritingDirection;
- (void)setBaseWritingDirection:(int)arg1;
- (BOOL)hasWritingDirectionAttribute;
- (void)setHasWritingDirectionAttribute:(BOOL)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (BOOL)italic;
- (void)setItalic:(BOOL)arg1;
- (BOOL)bold;
- (void)setBold:(BOOL)arg1;
- (void)setFontIsValid:(BOOL)arg1;
- (unsigned int)unicodeAlternativeLength;
- (void)setUnicodeAlternativeLength:(unsigned int)arg1;
- (BOOL)multiByteEncoding;
- (void)setMultiByteEncoding:(BOOL)arg1;
- (unsigned long)codePageEncoding;
- (void)setCodePageEncoding:(unsigned long)arg1;
- (unsigned long)toUniCharEncoding;
- (void)setToUniCharEncoding:(unsigned long)arg1;
- (unsigned long)defaultToUniCharEncoding;
- (void)setDefaultToUniCharEncoding:(unsigned long)arg1;
- (unsigned int)level;
- (id)currentAttributes;
- (id)mutableAttributes;
- (void)setViewScale:(int)arg1;
- (void)setViewKind:(int)arg1;
- (struct CGSize)viewSize;
- (void)setViewSize:(struct CGSize)arg1;
- (float)bottomMargin;
- (void)setBottomMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (float)rightMargin;
- (void)setRightMargin:(float)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (struct CGSize)paperSize;
- (void)setPaperSize:(struct CGSize)arg1;
- (id)documentInfoDictionary;
- (void)popState;
- (void)pushState;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

