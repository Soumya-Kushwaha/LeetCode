# Write your MySQL query statement below
SELECT
    st.student_id,
    st.student_name,
    s.subject_name,
    COUNT(e.subject_name) AS attended_exams
FROM subjects s
CROSS JOIN students st
LEFT JOIN examinations e
    ON st.student_id = e.student_id
    AND s.subject_name = e.subject_name
GROUP BY
    st.student_id,
    st.student_name,
    s.subject_name
ORDER BY st.student_id